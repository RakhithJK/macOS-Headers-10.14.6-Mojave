//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneUpdateResponseEvent.h>

@class FBSWorkspaceCreateSceneResponse;

@interface FBSWorkspaceCreateSceneResponseEvent : FBSWorkspaceSceneUpdateResponseEvent
{
}

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(retain, nonatomic) FBSWorkspaceCreateSceneResponse *response; // @dynamic response;

@end

