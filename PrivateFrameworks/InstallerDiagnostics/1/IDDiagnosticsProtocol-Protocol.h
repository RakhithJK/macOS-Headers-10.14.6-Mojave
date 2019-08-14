//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <InstallerDiagnostics/NSObject-Protocol.h>

@class NSString;

@protocol IDDiagnosticsProtocol <NSObject>
- (void)clearDiagnosticMessages:(void (^)(BOOL))arg1;
- (void)clearSingleDiagnosticMessage:(long long)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)recordDiagnosticMessage:(long long)arg1 withData:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)finishMessageTransport;
- (void)startMessageTransport;
- (void)finishInstall;
- (void)startNewInstall;
@end

