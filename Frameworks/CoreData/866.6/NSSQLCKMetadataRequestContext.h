//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSSQLStoreRequestContext.h>

@class PFCloudKitMetadataRequest;

__attribute__((visibility("hidden")))
@interface NSSQLCKMetadataRequestContext : NSSQLStoreRequestContext
{
}

- (BOOL)executeRequestUsingConnection:(id)arg1;
- (BOOL)isWritingRequest;
@property(readonly, nonatomic) PFCloudKitMetadataRequest *request;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end
