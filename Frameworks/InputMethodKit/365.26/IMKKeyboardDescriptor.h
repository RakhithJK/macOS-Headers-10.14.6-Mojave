//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IMKCandidateMenu;

@interface IMKKeyboardDescriptor : NSObject
{
    id <IMKCandidateMenu> _candidateMenu;
}

@property(readonly, nonatomic) id <IMKCandidateMenu> candidateMenu; // @synthesize candidateMenu=_candidateMenu;
- (void).cxx_destruct;
- (id)initWithCandidateMenu:(id)arg1;
- (id)init;

@end

