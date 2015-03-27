/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSDMediaInfo : TSDStyledInfo {
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int isPlaceholder : 1; 
        unsigned int wasMediaReplaced : 1; 
    } mFlags;
    } mOriginalSize;
}

@property(readonly) struct CGSize { float x1; float x2; } defaultOriginalSize;
@property unsigned int flags;
@property BOOL isPlaceholder;
@property(readonly) NSString * mediaDisplayName;
@property(readonly) NSString * mediaFileType;
@property struct CGSize { float x1; float x2; } originalSize;
@property(readonly) struct CGSize { float x1; float x2; } rawDataSize;
@property BOOL wasMediaReplaced;

- (struct CGPoint { float x1; float x2; })centerForReplacingWithNewMedia;
- (id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)copyWithContext:(id)arg1;
- (struct CGSize { float x1; float x2; })defaultOriginalSize;
- (unsigned int)flags;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (BOOL)isPlaceholder;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (struct CGSize { float x1; float x2; })originalSize;
- (struct CGSize { float x1; float x2; })rawDataSize;
- (void)setFlags:(unsigned int)arg1;
- (void)setGeometry:(id)arg1;
- (void)setIsPlaceholder:(BOOL)arg1;
- (void)setOriginalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setWasMediaReplaced:(BOOL)arg1;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (BOOL)wasMediaReplaced;

@end