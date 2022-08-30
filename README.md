# Phenix iOS SDK
The Phenix SDK is provided as a standard iOS [XCFramework](https://help.apple.com/xcode/mac/11.4/#/dev6f6ac218b).
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
* `<SDK root>/lib/PhenixSdk.xcframework/ios-arm64_x86_64-simulator/PhenixSdk.framework`: This contains the following architectures for simulators: **arm64** & **x86_64**
* `<SDK root>/lib/PhenixSdk.xcframework/ios-arm64/PhenixSdk.framework`: This contains the following physical device architecture: **arm64**

Notes:
* **The Minimum Deployment Target is iOS 9.0**. Combined with the supported architectures listed above, this means that the Phenix SDK can run on iOS devices as old as the iPhone4S or iPod Touch 5th Gen.

To integrate the Phenix SDK framework into your Xcode project, follow these steps:

1. Add the framework in the `General` section of your Xcode project
2. Open the `Frameworks, Libraries, and Embedded Content` section within the General page, choose "Add Files" and add the Phenix SDK XCFramework.
3. Verify that the following property is set: `Runpath Search Paths` should be `@executable_path/Frameworks` (under *Build Settings* -> *Linking*)
5. **Objective-C only**: Set `Enable Modules (C and Objective-C)` to `Yes` (under *Build Settings* -> *Apple Clang - Language - Modules*)
6. Import the PhenixSdk module as follows in your source files that need to interact with the Phenix SDK:
  * `@import PhenixSdk;` (Objective-C)
  * `import PhenixSdk` (Swift)

If you were previously using the static Phenix SDK library or Framework, make sure you first remove all references to the static lib or Framework, and other frameworks not needed by your app. You can also delete all compiler and linker flags that you do not need yourself.

## Debugging
Please check our [documentation](https://phenixrts.com/docs/ios/?swift#debugging).

## See Also
### Documentation
* [Channel Viewer Tutorial](https://phenixrts.com/docs/ios/#view-a-channel)
* [Phenix Channel Express](https://phenixrts.com/docs/ios/#channel-express)
* [Phenix Low Level API](https://phenixrts.com/docs/ios/low-level/)
* [Phenix Platform Documentation](http://phenixrts.com/docs/)
