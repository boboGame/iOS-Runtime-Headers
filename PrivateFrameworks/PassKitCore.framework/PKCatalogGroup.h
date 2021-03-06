/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_groupID;
    BOOL _isUbiquitous;
    NSMutableArray *_uniqueIDs;
}

@property (nonatomic, retain) NSNumber *groupID;
@property (nonatomic) BOOL isUbiquitous;
@property (nonatomic, retain) NSMutableArray *uniqueIDs;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToGroup:(id)arg1;
- (BOOL)isUbiquitous;
- (void)setGroupID:(id)arg1;
- (void)setIsUbiquitous:(BOOL)arg1;
- (void)setUniqueIDs:(id)arg1;
- (id)uniqueIDs;

@end
