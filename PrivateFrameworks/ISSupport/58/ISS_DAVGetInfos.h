//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DAVGetInfos : ISS_DAVRequest
{
}

+ (id)getInfosRequestWithSession:(id)arg1 path:(id)arg2;
+ (id)getInfosRequestWithURL:(id)arg1;
- (void)finalizeOperation;
- (id)infos;
- (id)initGetInfosWithSession:(id)arg1 path:(id)arg2;
- (id)initGetInfosWithURL:(id)arg1;

@end

