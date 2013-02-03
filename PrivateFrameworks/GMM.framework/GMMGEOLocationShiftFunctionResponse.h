/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMGEOLocationShiftFunctionResponse : GEOLocationShiftFunctionResponse {
    int _cacheSqHalfLength;
    long long _latCoefficients[3];
    long long _lngCoefficients[3];
    int _modelSqHalfLength;
    int _originalLatitude;
    int _originalLongitude;
}

- (id)initWithGMMLocationShiftResponse:(id)arg1;
- (BOOL)needsNewFunctionForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })originalCoordinate;
- (void)setOriginalCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })shiftedCoordinateForCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double*)arg2;
- (BOOL)wantsNewFunctionForCoordinate:(struct { double x1; double x2; })arg1;

@end