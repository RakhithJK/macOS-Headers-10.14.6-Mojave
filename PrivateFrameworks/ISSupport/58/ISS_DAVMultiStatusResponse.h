//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURL;

@interface ISS_DAVMultiStatusResponse : NSObject
{
    NSURL *href;
    NSURL *_targetHref;
    NSURL *_sourceHref;
    NSString *responseDescription;
    NSMutableArray *depthLimitPaths;
    int statusCode;
}

- (BOOL)handleResponseSubnode:(id)arg1;
- (id)responseDescription;
- (int)statusCode;
- (id)depthLimitPaths;
- (id)targetHref;
- (id)sourceHref;
- (id)href;
- (void)finalize;
- (void)dealloc;
- (id)initWithXMLNode:(id)arg1;
- (id)init;

@end

