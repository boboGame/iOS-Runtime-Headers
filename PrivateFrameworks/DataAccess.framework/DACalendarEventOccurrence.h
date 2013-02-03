/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DACalendarEventOccurrence : DACalendarObject {
}

@property(readonly) NSDate *date;
@property(readonly) DACalendarEvent *event;
@property(readonly) BOOL canBeDetached;

- (BOOL)canBeDetached;
- (id)date;
- (id)detachAndFuture:(BOOL)arg1;
- (id)event;
- (void)removeAndFuture:(BOOL)arg1;

@end