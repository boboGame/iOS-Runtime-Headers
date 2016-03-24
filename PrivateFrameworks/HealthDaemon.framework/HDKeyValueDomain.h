/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDKeyValueDomain : NSObject {
    int _category;
    NSString *_domainName;
    Class _entityClass;
    <HDHealthDaemon> *_healthDaemon;
}

@property (nonatomic, readonly) int category;
@property (nonatomic, readonly) NSString *domainName;

- (void).cxx_destruct;
- (id)allValuesWithError:(id*)arg1;
- (int)category;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (id)dateForKey:(id)arg1 error:(id*)arg2;
- (id)domainName;
- (id)initWithCategory:(int)arg1 domainName:(id)arg2 healthDaemon:(id)arg3;
- (id)modificationDatesForKeys:(id)arg1 error:(id*)arg2;
- (id)numberForKey:(id)arg1 error:(id*)arg2;
- (id)quantityForKey:(id)arg1 unit:(id)arg2 error:(id*)arg3;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)setDate:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)setNumber:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 error:(id*)arg4;
- (BOOL)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)setValuesWithDictionary:(id)arg1 error:(id*)arg2;
- (id)stringForKey:(id)arg1 error:(id*)arg2;
- (id)valuesForKeys:(id)arg1 error:(id*)arg2;

@end