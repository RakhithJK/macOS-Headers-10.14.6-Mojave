//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMCopyEngineCopier.h>

@class SMWindowsComponent, SMWindowsMacPathMapper;

@interface SMCopyEngineWindowsCopier : SMCopyEngineCopier
{
    id _context;
    SMWindowsMacPathMapper *_windowsMacPathMap;
    SMWindowsComponent *_windowsComponent;
    unsigned long long _quantityDataReceived;
}

@property unsigned long long quantityDataReceived; // @synthesize quantityDataReceived=_quantityDataReceived;
@property(retain) SMWindowsComponent *windowsComponent; // @synthesize windowsComponent=_windowsComponent;
@property(retain) SMWindowsMacPathMapper *windowsMacPathMap; // @synthesize windowsMacPathMap=_windowsMacPathMap;
@property(retain) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (BOOL)createLocalizedDirectoryAtPath:(id)arg1 localizedName:(id)arg2 attributes:(id)arg3 error:(id *)arg4;
- (id)copyPathForXMURLString:(id)arg1 sandboxed:(BOOL)arg2;
- (id)rootPathForUser:(id)arg1 sandboxed:(BOOL)arg2;
- (BOOL)copyActionShouldContinue:(id)arg1;
- (BOOL)copyActionShouldFail:(id)arg1;
- (void)copyAction:(id)arg1 finishedFile:(id)arg2 length:(unsigned long long)arg3;
- (void)copyAction:(id)arg1 updatedFile:(id)arg2 partialLength:(unsigned long long)arg3;
- (id)copyAction:(id)arg1 pathForXMURLString:(id)arg2;
- (BOOL)copyComponent:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (BOOL)processReturningError:(id *)arg1;
- (BOOL)preProcessReturningError:(id *)arg1;
- (id)description;
- (id)component;
- (void)setComponent:(id)arg1;

@end

