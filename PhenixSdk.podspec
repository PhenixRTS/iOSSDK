Pod::Spec.new do |spec|

  spec.version      = "2019.2.0" # keep in mind "spec.source" syntax.

  spec.name         = "PhenixSdk"
  spec.homepage     = "https://phenixrts.com/"
  spec.summary      = "Video Real Time Solutions"
  spec.license      = { :type => "Proprietary", :text => <<-LICENSE
                          Copyright 2019 Phenix Real Time Solutions, Inc. 
                          Confidential and Proprietary. All rights reserved.
                        LICENSE
                      }
  spec.author       = "Phenix Real Time Solutions, Inc."
  
  spec.source       = { :git => "git@github.com:PhenixRTS/iOSSDK.git", :tag => "v#{spec.version}" }
  spec.ios.vendored_framework  = "lib/Universal/PhenixSdk.framework"

  spec.platform     = :ios, "9.0"
  spec.xcconfig     = { "ENABLE_BITCODE" => "NO" }
end
