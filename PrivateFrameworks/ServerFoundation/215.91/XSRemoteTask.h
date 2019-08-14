//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSTask;

@interface XSRemoteTask : NSObject
{
    NSTask *_task;
    NSString *_server;
    NSString *_userName;
    NSString *_password;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_thread;
}

@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *userName; // @synthesize userName=_userName;
@property(copy) NSString *server; // @synthesize server=_server;
- (int)terminationStatus;
@property(retain) NSDictionary *environment;
@property(retain) NSArray *arguments;
@property(retain) NSString *launchPath;
@property(retain) id standardError;
@property(retain) id standardOutput;
@property(retain) id standardInput;
- (void)taskDidEnd:(id)arg1;
- (void)writePassword:(id)arg1;
- (id)configureSSHEnvironment:(id)arg1 password:(id)arg2;
- (void)waitUntilExit;
- (void)launch;
- (void)dealloc;
- (id)init;

@end

