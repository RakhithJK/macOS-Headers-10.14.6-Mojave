//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProactiveSupport/_PASSqliteDefaultErrorHandler.h>

@interface SGSqliteExitOnDeviceLockErrorHandler : _PASSqliteDefaultErrorHandler
{
    int _exitCode;
}

- (void)exitOnErrorIndicatingIOError:(int)arg1;
- (BOOL)handleSqliteError:(int)arg1 error:(id)arg2 onError:(CDUnknownBlockType)arg3 db:(id)arg4;
- (id)initWithExitCode:(int)arg1;

@end
