//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSXPCStoreServer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RCXPCStoreServer : NSXPCStoreServer
{
    NSString *_databaseServiceName;
    CDUnknownBlockType _shouldAcceptDatabaseConnection;
}

@property(copy, nonatomic) CDUnknownBlockType shouldAcceptDatabaseConnection; // @synthesize shouldAcceptDatabaseConnection=_shouldAcceptDatabaseConnection;
@property(copy, nonatomic) NSString *databaseServiceName; // @synthesize databaseServiceName=_databaseServiceName;
- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

