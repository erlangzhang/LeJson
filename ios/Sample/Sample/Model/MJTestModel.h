// Generated by LeJson ,  DO NOT EDIT!
// Feedback to https://github.com/iwanglian/LeJson/issues,  DO NOT EDIT!

// Created by alick on 2016-05-30 09:51:18,  DO NOT EDIT!

#import <Foundation/Foundation.h>

@class MJTestModel_Stories;
@class MJTestModel_TopStories;

@interface MJTestModel : NSObject 
@property (nonatomic, assign) int test;
@property (nonatomic, retain) NSString* date;
@property (nonatomic, retain) NSMutableArray<MJTestModel_Stories*>*  stories;
@property (nonatomic, retain) NSMutableArray<MJTestModel_TopStories*>*  top_stories;
@end


@interface MJTestModel_Stories : NSObject 
@property (nonatomic, retain) NSMutableArray<NSString*>*  images;
@property (nonatomic, assign) int type;
@property (nonatomic, assign) int ID;
@property (nonatomic, retain) NSString* ga_prefix;
@property (nonatomic, retain) NSString* title;
@end


@interface MJTestModel_TopStories : NSObject 
@property (nonatomic, retain) NSString* image;
@property (nonatomic, assign) int type;
@property (nonatomic, assign) int ID;
@property (nonatomic, retain) NSString* ga_prefix;
@property (nonatomic, retain) NSString* title;
@end


