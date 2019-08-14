//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIMInputController, CIMPreferences, IMKServer, NSString;

@interface CIMGlobalState : NSObject
{
    unsigned int _IOConnection;
    IMKServer *_server;
    NSString *_inputSourceIdentifier;
    unsigned long long _inlineState;
    CIMInputController *_mockInputController;
    id _mockClient;
    CIMPreferences *_mockPreferences;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned int IOConnection; // @synthesize IOConnection=_IOConnection;
@property(retain, nonatomic) CIMPreferences *mockPreferences; // @synthesize mockPreferences=_mockPreferences;
@property(retain, nonatomic) id mockClient; // @synthesize mockClient=_mockClient;
@property(retain, nonatomic) CIMInputController *mockInputController; // @synthesize mockInputController=_mockInputController;
@property(nonatomic) unsigned long long inlineState; // @synthesize inlineState=_inlineState;
@property(copy, nonatomic) NSString *inputSourceIdentifier; // @synthesize inputSourceIdentifier=_inputSourceIdentifier;
@property(retain, nonatomic) IMKServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL capsLockIsOn;
@property(readonly, nonatomic) CIMInputController *currentController;
@property(readonly, nonatomic) id currentClient;

@end

