//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TextInputCore/TILanguageModelOfflineLearningTask.h>

@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask
{
    id <TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;
- (id)dataSource;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)arg1 oneTimeTask:(BOOL)arg2;

@end

