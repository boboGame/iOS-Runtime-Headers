/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface _FBSqliteDeferredPreparedSimpleStatement : _FBSqlitePreparedSimpleStatement {
    NSString *_deferredSql;
}

- (void)dealloc;
- (BOOL)executeWithBindings:(id)arg1 resultRowHandler:(id /* block */)arg2 error:(out id*)arg3;
- (id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2;

@end
