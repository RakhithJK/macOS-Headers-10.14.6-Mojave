//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIDropProposal.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface UITextDropProposal : UIDropProposal <NSCopying>
{
    BOOL _useFastSameViewOperations;
    unsigned long long _dropAction;
    unsigned long long _dropProgressMode;
    unsigned long long _dropPerformer;
}

@property(nonatomic) unsigned long long dropPerformer; // @synthesize dropPerformer=_dropPerformer;
@property(nonatomic) BOOL useFastSameViewOperations; // @synthesize useFastSameViewOperations=_useFastSameViewOperations;
@property(nonatomic) unsigned long long dropProgressMode; // @synthesize dropProgressMode=_dropProgressMode;
@property(nonatomic) unsigned long long dropAction; // @synthesize dropAction=_dropAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDropOperation:(unsigned long long)arg1;

@end

