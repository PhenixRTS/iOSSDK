# Release notes

### 2021.0.15 ###
#### Features/Improvements

#### Fixes


### 2021.0.15-beta ###
#### Features/Improvements

#### Fixes

- Removed embedded private key and certificate


### 2021.0.14-beta ###
#### Features/Improvements

#### Fixes

- Fixes `TimeShift.getObservableFailure()` response when `Renderer.Seek` time stamp is out of range and `replay` subscriber capability is set. Now a `failed` response will be produced, instead of no failure.


### 2021.0.13-beta ###
#### Features/Improvements

- Support for new `replay` subscriber capability

#### Fixes


### 2021.0.12-beta ###
#### Features/Improvements

#### Fixes

- Fixed incorrect DeviceId warning log message when publishing


### 2021.0.11-beta ###
#### Features/Improvements

#### Fixes

- Fixed occasional crash occurring when starting multiple time shifts


### 2021.0.10-beta ###
#### Features/Improvements

#### Fixes

- Fixed memory leaks occurring when stopping a room publisher


### 2021.0.9-beta ###
#### Features/Improvements

- Increased internal timeout when connecting to PCast platform to avoid SDK initialization failures on clients with lossy network connections

#### Fixes

- Fixed issue where time-shifts would sometimes start playback at wrong position when starting and stoping the same instance repeatedly


### 2021.0.8-beta ###
#### Features/Improvements

- `PhenixUserMediaStream` instances will no longer get stopped because of network disruptions or switches so they can be retained for as long as needed by an app

#### Fixes

- Fixed bug which could cause app to hang and crash when backgrounding without audio playback permissions and with paused time shifts.


### 2021.0.7-beta ###
#### Features/Improvements

#### Fixes


### 2021.0.6-beta ###
#### Features/Improvements

- Time-shifts playing back VOD content are now auto paused when entering background without background audio playback permissions. Such time-shifts will no longer be stopped when backgrounding and can be resumed by the app if desired when coming back into foreground.

#### Fixes

- Fixed sporadic crashes
- Fixed small memory leaks when publishing
- Fixed time-shift video playback after foregrounding a backgrounded app


### 2021.0.5-beta ###
#### Features/Improvements

#### Fixes

- Fixed bug resulting in subscribers not getting audio


### 2021.0.2-beta ###
#### Features/Improvements

#### Fixes

- Fixed audio only real-time stream rendering
- Fixed missing callback invocation for `PhenixRoomExpress.subscribeToMemberStream` if
  member stream has ended alread


### 2021.0.1-beta ###
#### Features/Improvements

- When no Admin API (e.g. backend) is provided, channel publisher wildcard tokens are now automatically disabled to avoid failures

#### Fixes

- Added missing API `PhenixPublishToChannelOptionsBuilder.withoutWildcardTokens`


### 2021.0.0-beta ###
#### Features/Improvements

- Improved error handling when attempting to start subscribers and publishers with capabilities and edge stream tokens

#### Fixes

- Fixed broken time shifts for very long running streams


### 2020.1.77-beta ###
#### Features/Improvements

#### Fixes

- Viewport size is now reported in pixels, which ensures that viewport size based rendition selection works properly for time-shifts


### 2020.1.76-beta ###
#### Features/Improvements

- `PhenixTimeShiftOptions.chunkRetrievalTimeout` property allows overriding the maximum amount of time the SDK will wait to download a chunk for time-shift playback
- `PhenixChannelExpress.joinChannel` will now return with an "unauthorized" status (subscriber callback) when the stream token that was provided when the channel was joined is either invalid or has expired. The recourse for the app is to leave the channel (`PhenixRoomService.leaveRoom()`) and then re-join the channel with an updated stream token.

#### Fixes


### 2020.1.75-beta ###
#### Features/Improvements

#### Fixes


### 2020.1.74-beta ###
#### Features/Improvements
- PhenixTimeShiftOptions via PhenixRendererOptions allows customization of rendition selection behavior

#### Fixes
- Fixed possible crash due race condition occurring when shutting down a renderer
- Fixed resource leaks associated with time-shifts


### 2020.1.73-beta ###
#### Features/Improvements

#### Fixes
- Fixed possible crash due to memory corruption
- Fixed looping time-shift freezes


### 2020.1.71-beta ###
#### Features/Improvements

#### Fixes
- Fixed possible crash when playing back multiple time-shifts at once


### 2020.1.70-beta ###
#### Features/Improvements
- Improved TimeShift rendition switching speed (from lower to higher bandwidth rendition)
- Improved TimeShift playback reliability

#### Fixes


### 2020.1.68-beta ###
#### Features/Improvements
- Shortened duration for TimeShift to become ready
- Improved TimeShift playback reliability

#### Fixes


### 2020.1.67-beta ###
#### Features/Improvements

#### Fixes
- Fixes potential deadlock when calling `PhenixTimeShift.seek`


### 2020.1.64-beta ###
#### Features/Improvements
- Improves reliability of time shifts when seeking
- Improves time needed to become ready for time shifts

#### Fixes


### 2020.1.63-beta ###
#### Features/Improvements
- Observable session id on PhenixPCastExpress
- Support for stereo audio output
- Enabling time shift on subscribers now requires new `time-shift` capability

#### Fixes
- Fix for PhenixTimeShift creation failures


### 2020.1.61-beta ###
#### Features/Improvements

#### Fixes
- Fix for occasional failures when creating RoomChatService. Extra delay before creating service is no longer needed.
- Fix for failing TimeShift objects after calling Renderer.Seek for Live streams


### 2020.1.60-beta ###
#### Features/Improvements

#### Fixes
- Fix for further potential deadlocks that may occur when calling Renderer.Seek


### 2020.1.59-beta ###
#### Features/Improvements

#### Fixes
- Fix for short DVR segments not looping
- Fix for deadlock when calling Renderer.Seek


### 2020.1.58-beta ###
#### Features/Improvements
- Improved VOD stream startup and seeking times and stability
- Improved performance by avoiding pixel format conversions where possible

#### Fixes


### 2020.1.57-beta ###
#### Features/Improvements
- VOD asset playback support via TimeShift

#### Fixes


### 2020.1.56-beta ###
#### Features/Improvements

#### Fixes
- Member.CommitChanges callback is guaranteed to be called, with a timeout status if need be


### 2020.1.54-beta ###
#### Features/Improvements
- Adds support for MIME types to chat messages

#### Fixes


### 2020.1.52-beta ###
#### Features/Improvements
- Android: Support for configurable sampling rate for BlueTooth SCO capability

#### Fixes
- Fix for inconsistent self member updates


### 2020.1.50-beta ###
#### Features/Improvements
- Timeshift API
- Viewport based HLS layer selection for timeshifts
- Timeshift prefetch window is updated based on layer bitrate for faster switching from very low bitrate layers
- Support for "click and seek" into a timeshift segment
- Timeshift observable playback head reports position in UTC time
- Timeshift pause and play options
- Timeshift observable failure report
- LimitBanwdith API for TimeShift
- Added observable in RoomChatService that fires individually for each chat message as they come in
- Automatic stream restart on change in network type
- Android: Camera auto reconnection logic
- Android: Add support for Automatic Gain Control

#### Fixes
- Fix for deadlock when timeshift layer resolution changes
- Audio muted status needs to be honored when rendering time-shifted content
- iOS: Fixes image corruption during time shifted playback


### 2020.0.0 ###
#### Features/Improvements
- Introduced stream ended observables to MediaStream and Publisher, allowing for multiple subscribers
- The Publisher will now stop itself and forward the reason to the stream ended observables when the underlying stream ends
- `PhenixPCastExpress publish` will now accept publish options with both a user media stream and constraints specified
- Support BlueTooth A2DP profile and AirPlay devices for rendering audio

#### Fixes
- Fixed crash when calling `getUserMedia()` with both audio and video disabled
- The SDK will more reliably reconnect when a network connection is reestablished


### 2019.2.3 ###
#### Features/Improvements
- Support for edge authentication tokens
- Added playout delay override API
- Argument-less `withRenderer` API on various options builders has been deprecated. Use `withAudioOnlyRenderer` instead

#### Fixes
- Room or channel service automatically re-joins after a network disruption


### 2019.2.2 ###
#### Features/Improvements
- Support for iOS 13
- Added option to force VPIO Audio Unit to be used regardless of Audio Echo Cancellation setting, which allows the volume to be kept consistent when a stream subscriber starts to publish

#### Fixes
- Room participants will no longer leave zombie sessions around when reauthenticating
- Fixed `audio-only` for cases where wildcard tokens are present for channel viewers
- Fixed color artifacts when rendering H264 video in certain resolutions


### 2019.2.1 ###
#### Features/Improvements
- Lag render statistic via `Renderer.getStats`/`PhenixRenderer.stats`
- Reduced SDK initialization times
- Improved layer switching strategy for MBR streams
- Improved reconnection logic for clients with network outages
- Automatic channel viewer stream restart when app returns to foreground
#### Fixes
- Fixed memory leak on stop publishing
- Fixed rebuffering telemetry metric
- Fixed rare crash when backgrounding app
- Fixed crash when attempting to subscribe while SDK is being shut down
- Fixed spelling for `PhenixRoomChatService.sendMessageToRoom` API (previously `SendMessageToRoom`)


### 2019.2.0 ###
#### Features/Improvements
- `getObservableIsOnlineStatus` API on `PhenixPCastExpress`: Boolean observable value indicating whether or not we are currently connected to the Phenix platform
- `stats` property on `PhenixRenderer`: Will provide real-time statistics similar to https://phenixrts.com/docs/web/low-level/#object-rendererstats eventually. Current versions always returns 0 for `lag`.
#### Fixes
- Fix crash during ICE server registration
- Safe creation of an empty renderer from an already stopped ExpressSubscriber
- Publisher side frame-ready API: Drops frames when overloaded instead of falling behind
- Fix prefer-h264 publish capability for old iPads (e.g. mini 2)


### 2019.0.0 ###
#### Fixes
- Publisher bitrate limitation reason will remain “None” and no longer be set to “PublisherLimited” while recovering from bitrate override
- Normal app termination/exit will no longer trigger sporadic exceptions
- Audio volume will no longer decrease low for viewers that had become publishers temporarily
- Connected BlueTooth devices will now be sent audio when just rendering a local preview


### 2018.4.3 ###
#### Features/Improvements
- URIs passed to SDK can now accept leading and trailing whitespaces without causing failures
- Improved chat message observable behavior to ensure that initial callback will always contain most recent chat history
- Allow switching of camera resolution while publishing
- Support for BGRA pixel format when using FrameReady API

#### Fixes
- Fixed detached functionality when publishing remote streams via express API
- Fixed sporadic DTLS connection issues


### 2018.4.2 ###
#### Features/Improvements
- Improved connection time during SDK initialization.  Results in shorter time-to-first-frame.
- WiFi connected clients are no longer automatically forced through TURN/TCP
- New limitBandwidth API method to limit the maximum bandwidth a client should use for streams

#### Fixes
- Fixed reconnection issues which could occur when devices switch networks or are moved to background and back
- Fixed occasional 5 second hang when SDK is shut down
- Fix for dropping video or audio when consuming streams where one is arriving later than the other
- Fixed automatic resubscription logic when streams are ended with a recoverable reason


### 2018.4.1 ###
#### Features
- Framework is organized as a module for easier integration
- Universal version of SDK containing both device and simulator frameworks
- First version of telemetry, providing better visibility into device performance
- Room and channel publish APIs now provide RoomService instance in callback
- Improved connections times when initializing Phenix SDK
- Allow passing of custom HTTP headers for authentication and stream token requests

#### Fixes
- Fixes for various crashes that could occur when shutting down or stopping the Phenix SDK
- Fixed sporadic loss of audio on viewer side
- Fixed color representation when rendering stream content
- Fixed crash when running SDK in simulator
- Fixed H264 encoding issue on iPhones 5C and 5S
