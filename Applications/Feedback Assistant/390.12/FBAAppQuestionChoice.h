//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAQuestionChoice.h"

#import "NSCoding-Protocol.h"

@class FBAInstalledApp;

@interface FBAAppQuestionChoice : FBAQuestionChoice <NSCoding>
{
    FBAInstalledApp *_app;
}

+ (id)otherAppChoiceValue;
@property(retain, nonatomic) FBAInstalledApp *app; // @synthesize app=_app;
- (void).cxx_destruct;

@end

