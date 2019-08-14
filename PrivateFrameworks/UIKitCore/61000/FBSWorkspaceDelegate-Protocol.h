//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class FBSScene, FBSSceneTransitionContext, FBSWorkspace, NSSet;

@protocol FBSWorkspaceDelegate <NSObject>

@optional
- (void)workspace:(FBSWorkspace *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)workspace:(FBSWorkspace *)arg1 willDestroyScene:(FBSScene *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(FBSWorkspaceDestroySceneResponse *))arg4;
- (void)workspace:(FBSWorkspace *)arg1 didCreateScene:(FBSScene *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(FBSWorkspaceCreateSceneResponse *))arg4;
- (void)workspaceDidEndTransaction:(FBSWorkspace *)arg1;
- (void)workspaceDidBeginTransaction:(FBSWorkspace *)arg1;
@end

