Pod::Spec.new do |spec|

  # before editing, check spec.source definition
  spec.version      = "2019.2.0"

  spec.name         = "PhenixSdk"
  spec.summary      = "Video Realtime solutions"
  spec.homepage     = "http://phenixrts.com/"
  spec.license      = "Proprietary"
  spec.author       = "Phenix Real Time Solutions Inc."
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "git@github.com:PhenixRTS/iOSSDK.git", :tag => "v#{spec.version}" }
  spec.ios.vendored_framework  = "lib/Universal/PhenixSdk.framework"

  spec.xcconfig = { "ENABLE_BITCODE" => "NO" }
end