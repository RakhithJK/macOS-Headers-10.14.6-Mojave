//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding>
{
    long long _indentationLevel;
    UITableViewCell *_cell;
    double _height;
}

+ (id)row;
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (long long)indentationLevel;
- (void)setIndentationLevel:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

