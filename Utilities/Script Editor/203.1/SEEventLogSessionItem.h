//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SEEventLogItem.h"

@class NSDate, NSString, OSAScript, SEDocument, SEEventLogScriptResultItem, SEEventLogTellItem;

@interface SEEventLogSessionItem : SEEventLogItem
{
    SEDocument *_document;
    OSAScript *_script;
    int _executionCount;
    SEEventLogTellItem *_lastTellItem;
    SEEventLogScriptResultItem *_scriptResultItem;
    NSString *_scriptSource;
    NSDate *_sourceDate;
    BOOL _recordHistory;
    BOOL _recordEvents;
    BOOL _logToEventLog;
    BOOL _logToDocument;
}

+ (id)sessionItemForDocument:(id)arg1 andDataSource:(id)arg2;
- (BOOL)shouldLogForOptions:(int)arg1;
- (void)setLogToDocument:(BOOL)arg1;
- (BOOL)logToDocument;
- (void)setLogToEventLog:(BOOL)arg1;
- (BOOL)logToEventLog;
- (void)setRecordEvents:(BOOL)arg1;
- (BOOL)recordEvents;
- (void)setRecordHistory:(BOOL)arg1;
- (BOOL)recordHistory;
- (void)setSourceDate:(id)arg1;
- (id)sourceDate;
- (void)setScriptResultItem:(id)arg1;
- (id)scriptResultItem;
- (void)setLastTellItem:(id)arg1;
- (id)lastTellItem;
- (void)setExecutionCount:(int)arg1;
- (int)executionCount;
- (void)setSource:(id)arg1;
- (id)source;
- (id)scriptSource;
- (void)setScript:(id)arg1;
- (id)script;
- (void)setDocument:(id)arg1;
- (id)document;
- (void)dealloc;
- (id)initForDocument:(id)arg1 andDataSource:(id)arg2;

@end

