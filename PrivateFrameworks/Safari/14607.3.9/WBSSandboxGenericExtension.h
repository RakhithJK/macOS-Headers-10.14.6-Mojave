//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/WBSSandboxExtension.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WBSSandboxGenericExtension : WBSSandboxExtension
{
    struct Optional<long long> _handle;
    NSString *_extensionToken;
}

@property(readonly, copy, nonatomic) NSString *extensionToken; // @synthesize extensionToken=_extensionToken;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseResource;
- (BOOL)consumeResource;
- (id)initWithURL:(id)arg1 extensionToken:(id)arg2;

@end

