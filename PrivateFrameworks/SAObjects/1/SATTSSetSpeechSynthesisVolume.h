//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand
{
}

+ (id)setSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSpeechSynthesisVolume;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *volumeValue;
@property(copy, nonatomic) NSString *actionType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

