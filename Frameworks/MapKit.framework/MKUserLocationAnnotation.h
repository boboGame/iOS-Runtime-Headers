/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocationAnnotation : NSObject <MKUserLocationAnnotation> {
    double _accuracy;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
}

@property (nonatomic) double accuracy;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (double)accuracy;
- (struct { double x1; double x2; })coordinate;
- (void)setAccuracy:(double)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end
