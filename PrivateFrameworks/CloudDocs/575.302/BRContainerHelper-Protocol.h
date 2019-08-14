//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocs/NSObject-Protocol.h>

@class BRContainer, NSDictionary, NSString, NSURL;

@protocol BRContainerHelper <NSObject>
- (NSString *)itemIDForURL:(NSURL *)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(NSURL *)arg1 toNewParent:(NSURL *)arg2 error:(id *)arg3;
- (BRContainer *)fetchContainerForURL:(NSURL *)arg1;
- (NSDictionary *)fetchAllContainersByIDWithError:(id *)arg1;
- (BOOL)canFetchAllContainersByID;
@end
