Pod::Spec.new do |spec|

  spec.version      = "2019.2.2"

  spec.name         = "PhenixSdk"
  spec.homepage     = "https://phenixrts.com/"
  spec.summary      = "Video Real Time Solutions"
  spec.license      = { :type => "Proprietary", :text => <<-LICENSE
                          Copyright 2019 Phenix Real Time Solutions, Inc.
                          Confidential and Proprietary. All rights reserved.

                          By using this code you agree to the Phenix Terms of Service found online here:
                          http://phenixrts.com/terms-of-service.html
                        LICENSE
                      }
  spec.author       = "Phenix Real Time Solutions, Inc."

  spec.source       = { :git => "git@github.com:PhenixRTS/iOSSDK.git", :tag => "v#{spec.version}" }
  spec.ios.vendored_framework  = "lib/Universal/PhenixSdk.framework"

  spec.platform     = :ios, "9.0"
  spec.xcconfig     = { "ENABLE_BITCODE" => "NO" }
end
