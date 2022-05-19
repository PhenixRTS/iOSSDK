# Phenix iOS SDK
The Phenix SDK is provided as a standard iOS [Framework](https://developer.apple.com/library/archive/technotes/tn2435/_index.html).
Please make sure you have installed [GitLFS](https://git-lfs.github.com/).
## Integration
### With Cocoapod (recommended)
You can use our library with the [Cocoapod](https://cocoapods.org/) dependency manager.
`Podfile` Example:
```
source 'https://github.com/CocoaPods/Specs.git' # Default global repository
source 'git@github.com:PhenixRTS/CocoaPodsSpecs.git' # Phenix private repository

target 'your app name'
  use_frameworks!
  pod 'PhenixSdk'
```

### As independent Framework
The Phenix SDK framework is structured as follows:
* `<SDK root>/lib/iPhoneOS/PhenixSdk.framework`: This contains the following architectures for physical devices: **arm64**
* `<SDK root>/lib/iPhoneSimulator/PhenixSdk.framework`: This contains the following simulator architecture: x64
* `<SDK root>/lib/Universal/PhenixSdk.framework`: This contains all architectures for simulator and physical devices

Notes:
* In order to comply with Apple's App Store policies, simulator architectures need to be excluded from app builds uploaded to the App Store. For now, please either use the `iPhoneOS` version of the SDK, or ensure that non-device architectures are stripped out before attempting to deploy your app.
* When deploying your app in the App Store, Apple will employ a process called App Thinning, which ensures that your users will only download the architecture relevant for their device. All other architectures will be stripped automatically (see [Apple App Thinning](https://help.apple.com/xcode/mac/current/#/devbbdc5ce4f)).
* **The Minimum Deployment Target is iOS 9.0**. Combined with the supported architectures listed above, this means that the Phenix SDK can run on iOS devices as old as the iPhone4S or iPod Touch 5th Gen.

To integrate the Phenix SDK framework into your Xcode project, follow these steps:

1. Add the framework in the `General` section of your Xcode project
2. Open the `Embedded Binaries` section within the General page, click + and add the Phenix SDK framework. Select “Copy items if needed” if you want, this will copy the framework into your project’s folder (but it is optional).
3. If you are not copying the framework in step 2, you also have to update the `Framework Search Paths` (under *Build Settings* -> *Packaging*) to `<your Phenix SDK location>/lib/Universal` (or instead of `Universal`, use `iPhoneOS` or `iPhoneSimulator`)
4. Verify that the following property is set: `Runpath Search Paths` should be `@executable_path/Frameworks` (under *Build Settings* -> *Linking*)
5. **Objective-C only**: Set `Enable Modules (C and Objective-C)` to `Yes` (under *Build Settings* -> *Apple Clang - Language - Modules*)
6. Import the PhenixSdk module as follows in your source files that need to interact with the Phenix SDK:
  * `@import PhenixSdk;` (Objective-C)
  * `import PhenixSdk` (Swift)

If you were previously using the static Phenix SDK library, make sure you first remove all references to the static lib and other frameworks not needed by your app. You can also delete all compiler and linker flags that you do not need yourself.

## Debugging
Please check our [documentation](https://phenixrts.com/docs/ios/?swift#debugging).

## See Also
### Related Examples
* [Mobile Examples](https://github.com/PhenixRTS/MobileExamples)
* [Web Examples](https://github.com/PhenixRTS/WebExamples)
### Documentation
* [Channel Viewer Tutorial](https://phenixrts.com/docs/ios/#view-a-channel)
* [Phenix Channel Express](https://phenixrts.com/docs/ios/#channel-express)
* [Phenix Low Level API](https://phenixrts.com/docs/ios/low-level/)
* [Phenix Platform Documentation](http://phenixrts.com/docs/)
