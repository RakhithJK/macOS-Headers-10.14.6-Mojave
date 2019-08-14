//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameplayKit/GKComponent.h>

#import <GameplayKit/GKAgentDelegate-Protocol.h>
#import <GameplayKit/GKSerializedNodeContaining-Protocol.h>

@class NSIndexPath, NSString, SCNNode;

@interface GKSCNNodeComponent : GKComponent <GKSerializedNodeContaining, GKAgentDelegate>
{
    NSIndexPath *_serializableNodeIndexPath;
    SCNNode *_node;
}

+ (BOOL)supportsSecureCoding;
+ (id)componentWithNode:(id)arg1;
@property(readonly, nonatomic) SCNNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSIndexPath *serializableNodeIndexPath; // @synthesize serializableNodeIndexPath=_serializableNodeIndexPath;
- (void).cxx_destruct;
- (void)agentDidUpdate:(id)arg1;
- (void)agentWillUpdate:(id)arg1;
- (void)setEntity:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1;
- (void)setNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

