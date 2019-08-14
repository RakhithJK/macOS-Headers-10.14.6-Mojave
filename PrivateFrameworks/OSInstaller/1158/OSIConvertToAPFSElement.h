//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@class NSTimer;

@interface OSIConvertToAPFSElement : OSIInstallQueueElement
{
    BOOL _didRunTimer;
    float _currentProgress;
    NSTimer *_conversionTimer;
    double _timeSinceLastUpdate;
    double _conversionElapsedTime;
}

@property BOOL didRunTimer; // @synthesize didRunTimer=_didRunTimer;
@property float currentProgress; // @synthesize currentProgress=_currentProgress;
@property double conversionElapsedTime; // @synthesize conversionElapsedTime=_conversionElapsedTime;
@property double timeSinceLastUpdate; // @synthesize timeSinceLastUpdate=_timeSinceLastUpdate;
@property(retain) NSTimer *conversionTimer; // @synthesize conversionTimer=_conversionTimer;
- (void).cxx_destruct;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)copyAPFSPreBootFiles:(id)arg1 destFolder:(id)arg2 apfsUUID:(id)arg3;
- (id)createBootFilesFolderReturningPath:(id *)arg1;
- (void)endTimer;
- (void)updateProgress;
- (void)startTimer;
- (void)manageProgress:(float)arg1;
- (void)reportData:(id)arg1 toInstallerDiagnosticsKey:(long long)arg2;
- (BOOL)convertToAPFS:(id)arg1 withConvertedDisk:(id *)arg2 prebootPath:(id)arg3 withError:(id *)arg4;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;

@end

