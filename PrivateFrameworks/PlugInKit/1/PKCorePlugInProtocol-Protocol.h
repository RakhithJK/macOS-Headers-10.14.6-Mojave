//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol PKCorePlugInProtocol
@property(copy) NSDictionary *_userInfo;
- (void)prefsSetObject:(id)arg1 forKey:(NSString *)arg2 inPlugIn:(NSString *)arg3 result:(void (^)(void))arg4;
- (void)prefsObjectForKey:(NSString *)arg1 inPlugIn:(NSString *)arg2 result:(void (^)(id))arg3;
- (void)shutdownPlugIn;
- (void)setEmbeddedContext:(id)arg1;
- (void)beginUsingPlugIn:(id)arg1 ready:(void (^)(PKServicePersonality *, id))arg2;
- (void)prepareUsing:(NSDictionary *)arg1 reply:(void (^)(NSError *, NSDictionary *))arg2;
- (void)prepareUsingPlugIn:(NSString *)arg1 hostProtocol:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
@end

