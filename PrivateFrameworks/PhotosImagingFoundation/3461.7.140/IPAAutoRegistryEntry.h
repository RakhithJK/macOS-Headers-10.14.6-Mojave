//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPAAutoRegistryEntry : NSObject
{
    BOOL _persistable;
    Class _autoCalculatorClass;
    Class _autoSettingsClass;
}

@property(nonatomic) BOOL persistable; // @synthesize persistable=_persistable;
@property(retain, nonatomic) Class autoSettingsClass; // @synthesize autoSettingsClass=_autoSettingsClass;
@property(retain, nonatomic) Class autoCalculatorClass; // @synthesize autoCalculatorClass=_autoCalculatorClass;
- (void).cxx_destruct;

@end

