# Release notes

### 2018.10.19 ###
+ Fixes
    + Fixes for various crashes that could occur when shutting down or stopping the Phenix SDK
    + Fixed sporadic loss of audio on viewer side
    + Fixed color representation when rendering stream content
    + Fixed crash when running SDK in simulator
    + Fixed H264 encoding issue on iPhones 5C and 5S

+ Features
    + Framework is organized as a module for easier integration
    + Universal version of SDK containing both device and simulator frameworks
    + First version of telemetry, providing better visibility into device performance
    + Room and channel publish APIs now provide RoomService instance in callback
    + Improved connections times when initializing Phenix SDK
    + Allow passing of custom HTTP headers for authentication and stream token requests