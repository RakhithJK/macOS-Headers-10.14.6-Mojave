//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AUPasscodeCodecCommandLineOption : NSObject
{
    NSString *_optionSyntax;
    NSString *_optionDescription;
}

+ (id)optionWithSyntax:(id)arg1 description:(id)arg2;
@property(readonly, nonatomic) NSString *optionDescription; // @synthesize optionDescription=_optionDescription;
@property(readonly, nonatomic) NSString *optionSyntax; // @synthesize optionSyntax=_optionSyntax;
- (void).cxx_destruct;
- (id)initWithSyntax:(id)arg1 description:(id)arg2;

@end
