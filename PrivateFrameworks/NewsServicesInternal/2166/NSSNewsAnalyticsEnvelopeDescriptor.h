//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSCopying-Protocol.h>

@interface NSSNewsAnalyticsEnvelopeDescriptor : NSObject <NSCopying>
{
    int _contentType;
    int _contentTypeVersion;
    int _contentTypeMinorVersion;
    int _contentTypePatchVersion;
}

@property(readonly, nonatomic) int contentTypePatchVersion; // @synthesize contentTypePatchVersion=_contentTypePatchVersion;
@property(readonly, nonatomic) int contentTypeMinorVersion; // @synthesize contentTypeMinorVersion=_contentTypeMinorVersion;
@property(readonly, nonatomic) int contentTypeVersion; // @synthesize contentTypeVersion=_contentTypeVersion;
@property(readonly, nonatomic) int contentType; // @synthesize contentType=_contentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentType:(int)arg1 contentTypeVersion:(int)arg2 contentTypeMinorVersion:(int)arg3 contentTypePatchVersion:(int)arg4;
- (id)init;

@end

