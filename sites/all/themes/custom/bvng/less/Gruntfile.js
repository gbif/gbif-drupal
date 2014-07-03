module.exports = function(grunt) {
  'use strict';

  require('matchdep').filterDev('grunt-!(cli)').forEach(grunt.loadNpmTasks);

  grunt.initConfig({
    less: {
      dist: {
        files: {
          '../css/style.css': [
            'style.less'
          ]
        },
        options: {
          compress: true,
          sourceMap: true,
          sourceMapFilename: 'style.css.map',
          sourceMapRootpath: '/sites/all/themes/custom/bvng/less/'
        }
      }
    },
    watch: {
      all: {
        files: ['*.less'],
        tasks: ['less'],
      }
    }
  });
  grunt.registerTask('default', ['less', 'watch']);
};