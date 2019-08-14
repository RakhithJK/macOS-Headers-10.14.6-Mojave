//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDBaseObjectImp, NSMutableDictionary, NSString;

@interface ICDBaseCommandImp : NSObject
{
    NSString *_name;
    short _commandError;
    ICDBaseObjectImp *_objectPriv;
    NSMutableDictionary *_privateData;
    NSMutableDictionary *_commandData;
}

- (id)process;
- (short)updateCommandData;
- (id)doProcess;
- (void)dealloc;
- (void)printCommandData:(id)arg1 commandDone:(BOOL)arg2;
- (id)initWithPrivateData:(id)arg1 commandData:(id)arg2 name:(id)arg3;
- (id)initWithPrivateData:(id)arg1 commandData:(id)arg2;

@end

