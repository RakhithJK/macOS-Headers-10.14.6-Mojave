//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MigrationAssistantPane.h"

@class NSString, NSUserActivity;

@interface HandoffTargetLandingPane : MigrationAssistantPane
{
    NSString *_explanatoryText;
    NSUserActivity *_triggeringActivity;
}

@property(retain) NSUserActivity *triggeringActivity; // @synthesize triggeringActivity=_triggeringActivity;
@property(retain) NSString *explanatoryText; // @synthesize explanatoryText=_explanatoryText;
- (void).cxx_destruct;
- (void)willDisplayPane;
- (id)nextPaneIdentifier;
- (id)previousPaneIdentifier;

@end
