//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSMutableCopying-Protocol.h>

@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>
{
    AMSURLRequestProperties *_properties;
}

@property(retain) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1;

@end

