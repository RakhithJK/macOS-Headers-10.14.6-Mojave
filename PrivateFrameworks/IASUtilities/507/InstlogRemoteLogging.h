//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IASUtilities/ILCConnectionDelegate-Protocol.h>

@class ILCConnection, NSMutableDictionary, NSPipe;

@interface InstlogRemoteLogging : NSObject <ILCConnectionDelegate>
{
    int _state;
    ILCConnection *_logServerConnection;
    NSPipe *_logFilePipe;
    NSMutableDictionary *_fileKeyToPath;
}

+ (id)nvramStringForKey:(id)arg1;
+ (BOOL)shouldDoRemoteLogging;
@property(retain) NSMutableDictionary *fileKeyToPath; // @synthesize fileKeyToPath=_fileKeyToPath;
@property(retain) NSPipe *logFilePipe; // @synthesize logFilePipe=_logFilePipe;
@property int state; // @synthesize state=_state;
@property(retain) ILCConnection *logServerConnection; // @synthesize logServerConnection=_logServerConnection;
- (void).cxx_destruct;
- (void)sysdiagnoseDidSucceedForFiles:(id)arg1;
- (void)sysdiagnoseDidFailForFiles:(id)arg1;
- (void)gatherSysdiagnoseDataWithHandles:(id)arg1;
- (id)sysdiganoseFilenames;
- (void)sendSysdiagnose;
- (void)rebootMachine;
- (BOOL)sendLogString:(char *)arg1;
- (BOOL)waitForSuccessfulConnection;
- (void)connectionDidEnd:(id)arg1;
- (void)connectionDidFail:(id)arg1 error:(id)arg2;
- (void)connectionDidConnect:(id)arg1;
- (void)connectionDidStart:(id)arg1;
- (id)init;

@end

