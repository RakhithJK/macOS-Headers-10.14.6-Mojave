//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebQuotaManager-Protocol.h>

@class WebSecurityOrigin;

__attribute__((visibility("hidden")))
@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager>
{
    WebSecurityOrigin *_origin;
}

- (void)setQuota:(unsigned long long)arg1;
- (unsigned long long)quota;
- (unsigned long long)usage;
- (id)origin;
- (id)initWithOrigin:(id)arg1;

@end

