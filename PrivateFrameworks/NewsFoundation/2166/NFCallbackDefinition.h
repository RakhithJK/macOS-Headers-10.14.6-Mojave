//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NFDefinitionContainer;

@interface NFCallbackDefinition : NSObject
{
    CDUnknownBlockType _callbackBlock;
    id <NFDefinitionContainer> _privateContainer;
}

@property(readonly, nonatomic) id <NFDefinitionContainer> privateContainer; // @synthesize privateContainer=_privateContainer;
@property(readonly, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void).cxx_destruct;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1 privateContainer:(id)arg2;

@end

