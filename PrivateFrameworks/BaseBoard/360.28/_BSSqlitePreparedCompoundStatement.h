//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BaseBoard/BSSqlitePreparedStatement.h>

@class NSArray;

@interface _BSSqlitePreparedCompoundStatement : BSSqlitePreparedStatement
{
    NSArray *_statements;
}

- (void).cxx_destruct;
- (BOOL)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (id)initWithDatabaseConnection:(id)arg1 statements:(id)arg2;

@end

