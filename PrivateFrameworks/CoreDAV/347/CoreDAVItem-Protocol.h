//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class CoreDAVItem, CoreDAVXMLData, NSCache, NSData, NSDictionary, NSSet, NSURL;

@protocol CoreDAVItem <NSObject>
+ (NSCache *)parseRuleCache;
+ (NSDictionary *)copyParseRules;
- (void)parserSuggestsBaseURL:(NSURL *)arg1;
- (BOOL)validate;
- (void)write:(CoreDAVXMLData *)arg1;
- (NSDictionary *)copyParseRules;
- (void)parserFoundUnrecognizedElement:(CoreDAVItem *)arg1;
- (void)parserFoundPayload:(NSData *)arg1;
- (void)parserFoundAttributes:(NSSet *)arg1;
@end

