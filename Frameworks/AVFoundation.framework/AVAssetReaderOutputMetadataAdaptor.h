/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderOutputMetadataAdaptor : NSObject {
    AVAssetReaderOutputMetadataAdaptorInternal *_internal;
}

@property (nonatomic, readonly) AVAssetReaderTrackOutput *assetReaderTrackOutput;

+ (id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1;

- (id)assetReaderTrackOutput;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
- (id)nextTimedMetadataGroup;

@end
