//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreFoundation/ISOperation.h>

@class ISServiceProxy, NSString;

@interface ISCodeSignatureOperation : ISOperation
{
    ISServiceProxy *_proxy;
    NSString *_bundlePath;
    BOOL _showProgress;
    BOOL _isDeveloperSigned;
    BOOL _isAppleSigned;
}

+ (id)operationWithBundlePath:(id)arg1 showProgress:(BOOL)arg2 storeClient:(id)arg3;
@property BOOL isAppleSigned; // @synthesize isAppleSigned=_isAppleSigned;
@property BOOL isDeveloperSigned; // @synthesize isDeveloperSigned=_isDeveloperSigned;
@property BOOL showProgress; // @synthesize showProgress=_showProgress;
@property(retain) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(retain) ISServiceProxy *proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)main;
- (id)initWithBundlePath:(id)arg1 showProgress:(BOOL)arg2 storeClient:(id)arg3;

@end

