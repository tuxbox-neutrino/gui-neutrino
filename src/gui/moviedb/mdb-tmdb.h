/*
	Movie Database - TMDb

	Copyright (C) 2015-2020 TangoCash

	License: GPLv2

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation;

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __TMDB__
#define __TMDB__

#include <string>
#include <system/helpers.h>
#include <system/helpers-json.h>
#include <gui/widget/hintbox.h>

typedef struct
{
	std::string epgtitle;
	std::string poster_path;
	std::string overview;
	std::string original_title;
	std::string release_date;
	std::string vote_average;
	int         vote_count;
	int         id;
	std::string media_type;
	int         result;
	int         runtime;
	std::string runtimes;
	std::string genres;
	int         episodes;
	int         seasons;
	std::string cast;
} tmdbinfo;

class CTMDB
{
	private:
		tmdbinfo minfo;
		CHintBox *hintbox;
		std::string key; // tmdb api key
		bool getMovieDetails(std::string lang, bool second = false);
		bool getData(std::string url, Json::Value *root);
		void selectResult(Json::Value elements, int results, int &used_result);
		std::string posterfile;

	public:
		CTMDB();
		~CTMDB();
		static CTMDB *getInstance();
		void setTitle(std::string epgtitle);
		std::string getEPGText();
		std::string getMovieText();

		std::string getTitle()				{ return minfo.epgtitle; }
		std::string getOrgTitle()			{ return minfo.original_title; }
		std::string getReleaseDate()			{ return minfo.release_date; }
		std::string getDescription()			{ return minfo.overview; }
		std::string getVote()				{ return minfo.vote_average; }
		std::string getCast()				{ return minfo.cast; }
		std::string getPoster()				{ return posterfile; }
		bool        hasPoster()				{ return !minfo.poster_path.empty(); }
		bool        getBigPoster(std::string poster)	{ return downloadUrl("http://image.tmdb.org/t/p/w342" + minfo.poster_path, poster); }
		bool        getSmallPoster(std::string poster)	{ return downloadUrl("http://image.tmdb.org/t/p/w185" + minfo.poster_path, poster); }
		int         getResults()			{ return minfo.result; }
		int         getStars()				{ return (int)(atof(minfo.vote_average.c_str()) * 10); }
		void        cleanup();
};

#endif
