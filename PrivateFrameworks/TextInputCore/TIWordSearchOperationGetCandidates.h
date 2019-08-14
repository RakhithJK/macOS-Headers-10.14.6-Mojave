//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class NSArray, NSString, TIMecabraIMLogger, TIWordSearch, TIWordSearchCandidateResultSet;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation
{
    BOOL _predictionEnabled;
    BOOL _reanalysisMode;
    BOOL _hardwareKeyboardMode;
    NSString *_inputString;
    TIWordSearchCandidateResultSet *_results;
    id _target;
    NSArray *_geometryModelData;
    SEL _action;
    TIWordSearch *_wordSearch;
    TIMecabraIMLogger *_logger;
    unsigned long long _autocapitalizationType;
}

@property(readonly, nonatomic) unsigned long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) TIMecabraIMLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) BOOL hardwareKeyboardMode; // @synthesize hardwareKeyboardMode=_hardwareKeyboardMode;
@property(retain) TIWordSearch *wordSearch; // @synthesize wordSearch=_wordSearch;
@property(readonly, nonatomic) BOOL reanalysisMode; // @synthesize reanalysisMode=_reanalysisMode;
@property(readonly, nonatomic) BOOL predictionEnabled; // @synthesize predictionEnabled=_predictionEnabled;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) NSArray *geometryModelData; // @synthesize geometryModelData=_geometryModelData;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) TIWordSearchCandidateResultSet *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
- (void).cxx_destruct;
- (void)completeSearchOnMainThreadWithResults:(id)arg1;
- (void)perform;
- (void)checkForCachedResults;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 predictionEnabled:(BOOL)arg3 reanalysisMode:(BOOL)arg4 autocapitalizationType:(unsigned long long)arg5 target:(id)arg6 action:(SEL)arg7 geometryModelData:(id)arg8 hardwareKeyboardMode:(BOOL)arg9 logger:(id)arg10;

@end
