//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUI/PUExtensionVendor-Protocol.h>

@class NSString, NSURL, PHProjectInfo;

@protocol PUProjectExtensionVendor <PUExtensionVendor>
- (void)finishProjectWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)resumeProjectEditingWithProjectIdentifier:(NSString *)arg1 libraryURL:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)beginProjectWithProjectIdentifier:(NSString *)arg1 libraryURL:(NSURL *)arg2 projectInfo:(PHProjectInfo *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)requestTCCAccessForPhotos:(void (^)(NSError *))arg1;
- (void)requestProjectTypeSourceForCategory:(NSString *)arg1 reply:(void (^)(NSXPCListenerEndpoint *))arg2;
@end

