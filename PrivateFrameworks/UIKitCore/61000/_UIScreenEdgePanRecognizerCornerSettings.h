//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UISettings.h>

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerCornerSettings : _UISettings
{
    double _cornerSize;
    double _cornerAngleWindow;
}

+ (id)settingsControllerModule;
+ (id)keyPathsForValuesAffectingCornerAngleWindowDegreees;
@property(nonatomic) double cornerAngleWindow; // @synthesize cornerAngleWindow=_cornerAngleWindow;
@property(nonatomic) double cornerSize; // @synthesize cornerSize=_cornerSize;
@property(nonatomic) double cornerAngleWindowDegreees;
- (void)setDefaultValues;

@end

